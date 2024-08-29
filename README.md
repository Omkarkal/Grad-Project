# Grad-Project
Fingure gesture based wheelchair using flex sensors
<!doctype html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>TrainTicket</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet">
</head>
<style>
    .input-group {
        height: 100px;
        width: 1126px;
    }

    .container {
        display: flex;
        justify-content: center;
        align-items: center;
        height: 100vh;
    }

    .modal-dialog {
        max-width: 80%;
        /* Adjust this percentage to your preference */
    }

    .input-group .form-select:first-child {
        border-top-left-radius: 35px;
        border-bottom-left-radius: 35px;
    }

    .input-group .form-control {
        border-radius: 0;
    }

    .input-group .btn-primary {
        border-top-right-radius: 35px;
        border-bottom-right-radius: 35px;
    }

    .navbar-nav .nav-link {
        font-size: 18px;
        font-weight: 500;
        /* Increase the font size as needed */
    }
</style>

<body>

    <!-- NavBar -->
    <nav class="navbar navbar-expand-lg bg-body-secondary fixed-top">
        <div class="container-fluid">
            <a class="navbar-brand" href="#"><img src="/train_24dp_000000_FILL0_wght400_GRAD0_opsz24.png" width="45px"
                    height="45px" alt="Home Icon"></a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent"
                aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                <span class="navbar-toggler-icon"></span>
            </button>
        </div>
        <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav d-flex">
                <li class="nav-item">
                    <a class="nav-link" href="#" data-bs-toggle="modal" data-bs-target="#">Home</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="#" data-bs-toggle="modal" data-bs-target="#bookTicketModal">View_Ticket</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="#" data-bs-toggle="modal" data-bs-target="#bookTicketModal">Profile</a>
                </li>
                <li class="nav-item">
                    <a class="nav-link" href="#" data-bs-toggle="modal" data-bs-target="#bookTicketModal">Logout</a>
                </li>
            </ul>
        </div>
    </nav>
    <!-- NavBar -->

    <!-- Modal for Booking Ticket -->
    <div class="modal fade" id="bookTicketModal" tabindex="-1" aria-labelledby="bookTicketModalLabel" aria-hidden="true">
        <div class="modal-dialog modal-dialog-centered">
            <div class="modal-content">
                <div class="modal-header">
                    <h5 class="modal-title" id="bookTicketModalLabel">Book a Ticket</h5>
                    <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
                </div>
                <div class="modal-body">
                    <!-- Form inside the modal to book a ticket -->
                    <form>
                        <div class="mb-3">
                            <label for="modalFromStation" class="form-label">From</label>
                            <select class="form-select" id="modalFromStation">
                                <option selected>Select a Station</option>
                                <option value="1">Station 1</option>
                                <option value="2">Station 2</option>
                                <option value="3">Station 3</option>
                            </select>
                        </div>
                        <div class="mb-3">
                            <label for="toStation" class="form-label">To</label>
                            <select class="form-select" id="toStation">
                                <option selected>Select a Station</option>
                                <option value="1">Station 1</option>
                                <option value="2">Station 2</option>
                                <option value="3">Station 3</option>
                            </select>
                        </div>
                        <div class="mb-3">
                            <label for="toStation" class="form-label">Select Class</label>
                            <select class="form-select" id="toStation">
                                <option selected>Select Class</option>
                                <option value="1">First class</option>
                                <option value="2">A.C tier 1</option>
                                <option value="3">A.C tier2</option>
                                <option value="4">Tatkal</option>
                            </select>
                        </div>
                        <div class="mb-3">
                            <label for="toStation" class="form-label">Number of tickets</label>
                            <input type="Number" class="form-control" id="NumberInput">
                        </div>
                        <div class="mb-3">
                            <label for="journeyDate" class="form-label">Journey Date</label>
                            <input type="date" class="form-control" id="journeyDate">
                        </div>
                        <button type="submit" class="btn btn-primary">Book Now</button>
                    </form>
                </div>
            </div>
        </div>
    </div>
    <!-- End of Modal -->

    <!-- User input area -->
    <div class="container">
        <div class="input-group">
            <select class="form-select" id="userFromStation" aria-label="Default select example">
                <option selected>FROM</option>
                <option value="1">One</option>
                <option value="2">Two</option>
                <option value="3">Three</option>
            </select>
            <select class="form-select" id="userToStation" aria-label="Default select example">
                <option selected>TO</option>
                <option value="1">One</option>
                <option value="2">Two</option>
                <option value="3">Three</option>
            </select>

            <input type="date" class="form-control" id="dateInput">
            <button class="btn btn-primary" type="button" data-bs-toggle="modal" data-bs-target="#bookTicketModal">Search
                Train</button>
        </div>
    </div>
    </div>
    <!-- User input area -->

    <!-- footer -->

    <footer class="py-2 bg-dark-subtle footer">
        <div class="container">
            <div class="row">
                <div class="col-6 col-md-2 mb-3">
                    <h5>Quick Links</h5>
                    <ul class="nav flex-column">
                        <li class="nav-item mb-2"><a href="./Home.html" class="nav-link p-0 text-body-secondary">Home</a></li>
                        <li class="nav-item mb-2"><a href="./Register_train.htm"
                                class="nav-link p-0 text-body-secondary">Register Train</a></li>
                        <li class="nav-item mb-2"><a href="./Admin_profile.html"
                                class="nav-link p-0 text-body-secondary">Profile</a></li>
                    </ul>
                </div>

                <div class="col-6 col-md-2 mb-3">
                    <h5>Contact Us</h5>
                    <ul class="nav flex-column">
                        <!-- Phone number: Click to call -->
                        <li class="nav-item mb-2">
                            <a href="tel:+11234567890" class="nav-link p-0 text-body-secondary">Phone: +91910000XXXX</a>
                        </li>

                        <!-- Email: Click to open email client -->
                        <li class="nav-item mb-2">
                            <a href="mailto:xyz@gmail.com" class="nav-link p-0 text-body-secondary">Email: xyz@gmail.com</a>
                        </li>

                        <!-- Address: Click to open in Google Maps -->
                        <li class="nav-item mb-2">
                            <a href="https://www.google.com/maps/search/?api=1&query=Thane(W),+Mumbai+Maharastra"
                                target="_blank" class="nav-link p-0 text-body-secondary">
                                Thane(W), Mumbai - 400615
                            </a>
                        </li>
                    </ul>

                </div>

                <div class="col-md-5 offset-md-1 mb-3">
                    <form>
                        <h5>Subscribe for Updates</h5>
                        <div class="d-flex flex-column flex-sm-row w-100 gap-2">
                            <label for="newsletter1" class="visually-hidden">Email address</label>
                            <input id="newsletter1" type="text" class="form-control" placeholder="Email address">
                            <button class="btn btn-primary" type="button">Subscribe</button>
                        </div>
                    </form>
                </div>
            </div>

            <div class="d-flex flex-column flex-sm-row justify-content-center align-items-center border-4 border-top pt-3">
                <p>&copy; 2024 Company, Inc. All rights reserved.</p>
            </div>
        </div>
    </footer>
    <!-- footer -->

    <!-- JavaScript to sync select elements -->
    <script>
        document.getElementById('userFromStation').addEventListener('change', function () {
            var userSelection = this.value;
            document.getElementById('modalFromStation').value = userSelection;
        });
    </script>
    <script>
        document.getElementById('userToStation').addEventListener('change', function () {
            var userSelection = this.value;
            document.getElementById('toStation').value = userSelection;
        });
    </script>
    <script>
        document.getElementById('dateInput').addEventListener('change', function () {
            var userSelection = this.value;
            document.getElementById('journeyDate').value = userSelection;
        });
    </script>

    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
</body>

</html>

